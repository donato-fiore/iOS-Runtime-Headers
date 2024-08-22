// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETERESOURCE_H
#define PXSTORYCONCRETERESOURCE_H

@class NSString;
@protocol PXStoryResource;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteResource : NSObject <PXStoryResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger px_storyResourceKind; // ivar: _kind
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 kind:(NSInteger)arg1 ;


@end


#endif