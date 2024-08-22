// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCLASSKITICONID_H
#define CRKCLASSKITICONID_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRKClassKitIconID : NSObject

@property (copy, nonatomic) NSString *colorIdentifier; // ivar: _colorIdentifier
@property (copy, nonatomic) NSString *mascotIdentifier; // ivar: _mascotIdentifier
@property (readonly, copy, nonatomic) NSString *stringValue;


+(id)stringBySanitizingString:(id)arg0 ;
-(id)init;
-(id)initWithClass:(id)arg0 ;
-(id)initWithIconID:(id)arg0 ;
-(id)initWithMascotIdentifier:(id)arg0 colorIdentifier:(id)arg1 ;


@end


#endif