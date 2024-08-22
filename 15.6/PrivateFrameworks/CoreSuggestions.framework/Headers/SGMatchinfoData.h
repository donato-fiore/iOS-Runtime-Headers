// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMATCHINFODATA_H
#define SGMATCHINFODATA_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface SGMatchinfoData : NSObject

@property (readonly, nonatomic) NSNumber *detailEntityId; // ivar: _detailEntityId
@property (readonly, nonatomic) NSNumber *entityId; // ivar: _entityId
@property (readonly, nonatomic) NSData *matchinfoData; // ivar: _matchinfoData


+(id)matchinfoDataWithEntityId:(id)arg0 detailEntityId:(id)arg1 ;
+(id)matchinfoDataWithEntityId:(id)arg0 detailEntityId:(id)arg1 matchinfoData:(id)arg2 ;
-(BOOL)isEqualToMatchinfoData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchinfoDataWithEntityId:(id)arg0 detailEntityId:(id)arg1 matchinfoData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif