// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMULTISORTDESCRIPTOR_H
#define MPMULTISORTDESCRIPTOR_H

@class NSSortDescriptor, NSDictionary;



@interface MPMultiSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSDictionary *relatedProperties; // ivar: _relatedProperties


+(BOOL)supportsSecureCoding;
+(id)sortDescriptorWithRelatedProperties:(id)arg0 ascending:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif