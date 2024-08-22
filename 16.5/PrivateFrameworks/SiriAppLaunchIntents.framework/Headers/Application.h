// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPLICATION_H
#define APPLICATION_H

@class INObject, NSString, NSNumber;



@interface Application : INObject

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSNumber *isOffloaded;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sceneId;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif