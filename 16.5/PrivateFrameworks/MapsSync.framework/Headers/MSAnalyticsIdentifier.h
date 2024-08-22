// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSANALYTICSIDENTIFIER_H
#define MSANALYTICSIDENTIFIER_H

@class TtC8MapsSync14MapsSyncObject, NSData;



@interface MSAnalyticsIdentifier : TtC8MapsSync14MapsSyncObject {
    ? _data;
    ? _positionIndex;
}


@property (nonatomic, copy) NSData *data;
@property (nonatomic) NSInteger positionIndex;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 data:(id)arg1 positionIndex:(NSInteger)arg2 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif