// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSRAPRECORD_H
#define MSRAPRECORD_H

@class TtC8MapsSync14MapsSyncObject, NSData, NSString, NSDate;



@interface MSRAPRecord : TtC8MapsSync14MapsSyncObject {
    ? _contentData;
    ? _countryCode;
    ? _positionIndex;
    ? _reportId;
    ? _status;
    ? _statusLastUpdatedDate;
    ? _summary;
    ? _type;
}


@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 contentData:(id)arg1 countryCode:(id)arg2 positionIndex:(NSInteger)arg3 reportId:(id)arg4 status:(short)arg5 statusLastUpdatedDate:(id)arg6 summary:(id)arg7 type:(short)arg8 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif