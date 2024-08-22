// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTANGIERDRAGITEMPROVIDER_H
#define SXTANGIERDRAGITEMPROVIDER_H

@class NSString;
@protocol SXTangierDragItemProvider;

#import <Foundation/Foundation.h>


@interface SXTangierDragItemProvider : NSObject <SXTangierDragItemProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)session:(id)arg0 containsURL:(id)arg1 ;
-(id)dragItemForSmartField:(id)arg0 interaction:(id)arg1 session:(id)arg2 ;


@end


#endif