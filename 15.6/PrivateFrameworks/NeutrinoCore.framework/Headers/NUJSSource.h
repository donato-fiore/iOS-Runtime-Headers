// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUJSSOURCE_H
#define NUJSSOURCE_H

@class NSString;
@protocol NUJSSourceExport;


#import "NUJSProxy.h"
#import "NUSource.h"

@interface NUJSSource : NUJSProxy <NUJSSourceExport>



@property (readonly) NSString *mediaType;
@property (readonly, nonatomic) NUSource *source;


-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)initWithSource:(id)arg0 context:(id)arg1 ;
-(id)toString;


@end


#endif