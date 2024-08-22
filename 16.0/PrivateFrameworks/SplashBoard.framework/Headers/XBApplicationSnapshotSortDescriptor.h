// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBAPPLICATIONSNAPSHOTSORTDESCRIPTOR_H
#define XBAPPLICATIONSNAPSHOTSORTDESCRIPTOR_H

@class NSSortDescriptor, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface XBApplicationSnapshotSortDescriptor : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) NSSortDescriptor *NSSortDescriptor;
@property (nonatomic) BOOL ascending; // ivar: _ascending
@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger key; // ivar: _key
@property (readonly) Class superclass;


+(id)_propertyKeyForSnapshotKey:(NSUInteger)arg0 overriddenForNil:(*BOOL)arg1 ;
+(id)sortDescriptorWithKey:(NSUInteger)arg0 ascending:(BOOL)arg1 comparator:(id)arg2 ;
-(id)_stringForKey:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithKey:(NSUInteger)arg0 ascending:(BOOL)arg1 comparator:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif