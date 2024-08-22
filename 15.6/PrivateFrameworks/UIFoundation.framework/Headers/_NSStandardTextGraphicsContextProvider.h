// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSSTANDARDTEXTGRAPHICSCONTEXTPROVIDER_H
#define _NSSTANDARDTEXTGRAPHICSCONTEXTPROVIDER_H

@class NSString;
@protocol NSTextGraphicsContextProvider;

#import <Foundation/Foundation.h>


@interface _NSStandardTextGraphicsContextProvider : NSObject <NSTextGraphicsContextProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)colorClassForApplicationFrameworkContext:(NSInteger)arg0 ;
+(id)graphicsContextForApplicationFrameworkContext:(NSInteger)arg0 ;


@end


#endif