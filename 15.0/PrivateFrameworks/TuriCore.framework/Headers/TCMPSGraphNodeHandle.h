// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSGRAPHNODEHANDLE_H
#define TCMPSGRAPHNODEHANDLE_H

@class NSString;
@protocol MPSHandle;

#import <Foundation/Foundation.h>


@interface TCMPSGraphNodeHandle : NSObject <MPSHandle>

 {
    NSString *_label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)handleWithLabel:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 ;
-(id)label;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif