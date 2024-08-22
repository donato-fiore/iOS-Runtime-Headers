// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDSLTABLEUPSERTSUBSCRIBER_H
#define BMDSLTABLEUPSERTSUBSCRIBER_H

@class BMDSLSubscriber, NSString;



@interface BMDSLTableUpsertSubscriber : BMDSLSubscriber {
    NSString *_identifier;
}


@property (copy, nonatomic) NSString *tableName; // ivar: _tableName


+(BOOL)supportsSecureCoding;
-(id)bpsSubscriber;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTableName:(id)arg0 identifier:(id)arg1 ;
-(id)initWithTableName:(id)arg0 identifier:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif