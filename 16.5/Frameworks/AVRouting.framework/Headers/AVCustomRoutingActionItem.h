// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCUSTOMROUTINGACTIONITEM_H
#define AVCUSTOMROUTINGACTIONITEM_H

@class NSString, UTType;

#import <Foundation/Foundation.h>


@interface AVCustomRoutingActionItem : NSObject {
    NSString *_identifier;
}


@property (copy, nonatomic) NSString *overrideTitle; // ivar: _overrideTitle
@property (copy, nonatomic) UTType *type; // ivar: _type


-(id)identifier;
-(id)init;
-(void)setIdentifier:(id)arg0 ;


@end


#endif