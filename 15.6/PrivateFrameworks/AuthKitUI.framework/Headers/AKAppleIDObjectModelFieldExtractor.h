// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAPPLEIDOBJECTMODELFIELDEXTRACTOR_H
#define AKAPPLEIDOBJECTMODELFIELDEXTRACTOR_H

@class RUIObjectModel, NSString;
@protocol AKAppleIDServerUIFieldExtractor;

#import <Foundation/Foundation.h>


@interface AKAppleIDObjectModelFieldExtractor : NSObject <AKAppleIDServerUIFieldExtractor>

 {
    RUIObjectModel *_objectModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_valueForFieldWithID:(id)arg0 inObjectModel:(id)arg1 ;
-(id)_valueForTextFieldFromPage:(id)arg0 rowID:(id)arg1 ;
-(id)initWithObjectModel:(id)arg0 ;
-(id)valueForFieldWithID:(id)arg0 ;


@end


#endif