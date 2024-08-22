// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHSTYLEMAPPER_H
#define TSCHSTYLEMAPPER_H

@class NSString;
@protocol TSKStyleMapper;

#import <Foundation/Foundation.h>


@interface TSCHStyleMapper : NSObject <TSKStyleMapper>



@property (readonly, nonatomic) BOOL clientsMustRemap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceMatchStyle; // ivar: _forceMatchStyle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<TSKStyleMapper> *underlyingMapper; // ivar: _underlyingMapper


+(id)mappedStyleWithMapper:(id)arg0 forStyle:(id)arg1 bakeComputable:(BOOL)arg2 ;
+(id)mappedStylesWithMapper:(id)arg0 forStyles:(id)arg1 bakeComputable:(BOOL)arg2 ;
+(id)mapperWithMapper:(id)arg0 ;
+(void)replaceReferencedStylesInMap:(id)arg0 withMapper:(id)arg1 ;
-(id)initWithMapper:(id)arg0 ;
-(id)mappedStyleForStyle:(id)arg0 ;
-(id)mappedStyleForStyle:(id)arg0 bakeComputable:(BOOL)arg1 ;
-(id)targetStylesheet;
-(void)popMappingContext:(id)arg0 ;
-(void)pushMappingContext:(id)arg0 ;
-(void)replaceReferencedStylesInMap:(id)arg0 ;


@end


#endif