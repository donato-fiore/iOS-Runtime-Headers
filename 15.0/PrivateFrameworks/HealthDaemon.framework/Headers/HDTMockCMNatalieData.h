// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDTMOCKCMNATALIEDATA_H
#define HDTMOCKCMNATALIEDATA_H

@class CMNatalieData, NSDate, NSUUID;



@interface HDTMockCMNatalieData : CMNatalieData {
    NSDate *_date;
    CGFloat _mets;
    CGFloat _active;
    CGFloat _basal;
    NSInteger _recordID;
    NSUUID *_source;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)recordId;
-(id)basalNatalies;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)endDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 mets:(CGFloat)arg1 active:(CGFloat)arg2 basal:(CGFloat)arg3 recordID:(NSInteger)arg4 source:(id)arg5 ;
-(id)mets;
-(id)natalies;
-(id)sourceId;
-(id)startDate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif