// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERSORTDESCRIPTOR_H
#define REMREMINDERSORTDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMReminderSortDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)sortDescriptorSortingByCreationDateAscending:(BOOL)arg0 ;
+(id)sortDescriptorSortingByDueDateAscending:(BOOL)arg0 ;
+(id)sortDescriptorSortingByOrderingInListAscending:(BOOL)arg0 ;
+(id)sortDescriptorSortingByPriorityAscending:(BOOL)arg0 ;
+(id)sortDescriptorSortingByTitleAscending:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ascending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif