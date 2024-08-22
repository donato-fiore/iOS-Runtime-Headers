// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTTRAITSPROVIDER_H
#define SXCOMPONENTTRAITSPROVIDER_H

@class NSString;
@protocol SXComponentTraitsProvider, SXDOMObjectProviding;

#import <Foundation/Foundation.h>


@interface SXComponentTraitsProvider : NSObject <SXComponentTraitsProvider>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)traitsForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 ;


@end


#endif