// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTQUEUECONFIGSECTIONQUEUEDESCRIPTOR_H
#define NTQUEUECONFIGSECTIONQUEUEDESCRIPTOR_H

@class NSArray;
@protocol NTSectionQueueDescriptor;

#import <Foundation/Foundation.h>


@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor>



@property (readonly, copy, nonatomic) NSArray *sectionDescriptors; // ivar: _sectionDescriptors
@property (readonly, nonatomic) NSUInteger visibleSectionConfigsLimit; // ivar: _visibleSectionConfigsLimit


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithQueueConfig:(id)arg0 appConfiguration:(id)arg1 todayData:(id)arg2 inFavoritesOnlyMode:(BOOL)arg3 respectsWidgetVisibleSectionsLimit:(BOOL)arg4 ;


@end


#endif