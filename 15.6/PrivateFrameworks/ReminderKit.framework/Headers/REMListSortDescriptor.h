// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLISTSORTDESCRIPTOR_H
#define REMLISTSORTDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMListSortDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)sortDescriptorSortingByNameAscending:(BOOL)arg0 ;
+(id)sortDescriptorSortingByOrderingInAccountAscending:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ascending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif