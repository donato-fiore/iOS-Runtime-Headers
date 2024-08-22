// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMEENTITY_H
#define HOMEENTITY_H

@class INObject, NSArray, NSString;



@interface HomeEntity : INObject

@property (nonatomic, copy) NSArray *deviceTypes;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic, copy) NSString *group;
@property (nonatomic, copy) NSString *home;
@property (nonatomic, copy) NSString *room;
@property (nonatomic) NSInteger sceneType;
@property (nonatomic) NSInteger type;
@property (nonatomic, copy) NSArray *zones;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif