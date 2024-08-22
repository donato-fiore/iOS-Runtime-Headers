// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIALIBRARYIDENTIFIER_H
#define VUIMPMEDIALIBRARYIDENTIFIER_H

@class NSString;
@protocol VUIMediaLibraryIdentifier;

#import <Foundation/Foundation.h>


@interface VUIMPMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif