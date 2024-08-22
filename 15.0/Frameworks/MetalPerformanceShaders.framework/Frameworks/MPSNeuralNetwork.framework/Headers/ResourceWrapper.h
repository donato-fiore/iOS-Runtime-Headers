// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESOURCEWRAPPER_H
#define RESOURCEWRAPPER_H

@class NSString;
@protocol NodeWrapper;

#import <Foundation/Foundation.h>


@interface ResourceWrapper : NSObject <NodeWrapper>

 {
    *void _node;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)wrapperWithResource:(*void)arg0 ;
-(*void)node;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResource:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif