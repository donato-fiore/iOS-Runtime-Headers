// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSINCIDENTREPORT_H
#define MSINCIDENTREPORT_H

@class TtC8MapsSync14MapsSyncObject, NSString;



@interface MSIncidentReport : TtC8MapsSync14MapsSyncObject {
    ? _countryCode;
    ? _positionIndex;
    ? _type;
}


@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic) short type;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 countryCode:(id)arg1 positionIndex:(NSInteger)arg2 type:(short)arg3 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif