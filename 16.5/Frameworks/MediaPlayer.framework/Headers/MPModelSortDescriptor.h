// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELSORTDESCRIPTOR_H
#define MPMODELSORTDESCRIPTOR_H

@class NSSortDescriptor, NSArray;



@interface MPModelSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSArray *keyPath; // ivar: _keyPath


+(BOOL)supportsSecureCoding;
+(id)sortDescriptorWithKeyPath:(id)arg0 ascending:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif