// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKCOABSTRACTOPERATION_H
#define TSKCOABSTRACTOPERATION_H

@class TSUUUIDPath, NSString;

#import <Foundation/Foundation.h>


@interface TSKCOAbstractOperation : NSObject {
    vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> _address;
}


@property (readonly, nonatomic) *void UUIDAddress;
@property (readonly, nonatomic) TSUUUIDPath *UUIDPath;
@property (readonly, nonatomic) BOOL isNoop; // ivar: _noop
@property (readonly, nonatomic) NSString *toString;


+(id)newObjectForUnarchiver:(id)arg0 message:(struct Message *)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAddress:(*void)arg0 noop:(BOOL)arg1 ;
-(id)initWithUnarchiver:(id)arg0 message:(*void)arg1 ;
-(struct shared_ptr<TSKCO::AbstractOperation> )newTransformableOperation;
-(void)populateAddressFromIdentifier:(*void)arg0 ;
-(void)populateRangeVector:(*void)arg0 fromRangeList:(*void)arg1 ;
-(void)saveAddress:(*void)arg0 identifier:(*void)arg1 ;
-(void)saveRangeVector:(*void)arg0 rangeList:(*void)arg1 ;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif