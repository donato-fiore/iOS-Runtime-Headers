// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STALARMMODIFICATION_H
#define STALARMMODIFICATION_H

@class STSiriModelObject, NSURL, NSNumber, NSString;



@interface STAlarmModification : STSiriModelObject {
    NSInteger _addedFrequency;
    NSURL *_alarmId;
    NSNumber *_enabled;
    NSNumber *_hour;
    NSString *_label;
    NSNumber *_minute;
    NSInteger _removedFrequency;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)addedFrequency;
-(NSInteger)removedFrequency;
-(id)_initWithAddedFrequency:(NSInteger)arg0 alarmId:(id)arg1 enabled:(id)arg2 hour:(id)arg3 label:(id)arg4 minute:(id)arg5 removedFrequency:(NSInteger)arg6 ;
-(id)alarmId;
-(id)enabled;
-(id)hour;
-(id)initWithCoder:(id)arg0 ;
-(id)label;
-(id)minute;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif