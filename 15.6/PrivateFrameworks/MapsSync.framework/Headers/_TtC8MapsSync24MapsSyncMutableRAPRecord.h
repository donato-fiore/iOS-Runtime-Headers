// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC24MAPSSYNCMUTABLERAPRECORD_H
#define _TTC8MAPSSYNC24MAPSSYNCMUTABLERAPRECORD_H

@class TtC8MapsSync23MapsSyncMutableBaseItem, NSData, NSString, NSDate;



@interface _TtC8MapsSync24MapsSyncMutableRAPRecord : TtC8MapsSync23MapsSyncMutableBaseItem {
    ? _proxy;
}


@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif