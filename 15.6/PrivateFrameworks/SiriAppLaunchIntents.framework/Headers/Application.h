// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPLICATION_H
#define APPLICATION_H

@class INObject, NSString;



@interface Application : INObject

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sceneId;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif