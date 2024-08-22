// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAGEOMETRYOPERATOR_H
#define IPAGEOMETRYOPERATOR_H

@class NSString;
@protocol IPAGeometryOperator;

#import <Foundation/Foundation.h>


@interface IPAGeometryOperator : NSObject <IPAGeometryOperator>

 {
    NSString *_identifer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)identifier;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)transformForGeometry:(id)arg0 ;


@end


#endif