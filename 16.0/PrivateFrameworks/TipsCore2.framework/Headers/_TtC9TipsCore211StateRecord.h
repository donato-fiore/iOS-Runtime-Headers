// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9TIPSCORE211STATERECORD_H
#define _TTC9TIPSCORE211STATERECORD_H

@class NSManagedObject, NSString, NSSet, NSDictionary;



@interface _TtC9TipsCore211StateRecord : NSManagedObject {
    ? _options;
}


@property (nonatomic) NSInteger currentValue;
@property (nonatomic) NSInteger defaultValue;
@property (nonatomic, copy) NSString *id;
@property (nonatomic) BOOL isTransient;
@property (nonatomic) NSInteger optionsValue;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, copy) NSDictionary *stateInfo;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif