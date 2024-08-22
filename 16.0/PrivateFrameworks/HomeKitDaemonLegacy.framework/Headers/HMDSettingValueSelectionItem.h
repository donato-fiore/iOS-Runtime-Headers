// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETTINGVALUESELECTIONITEM_H
#define HMDSETTINGVALUESELECTIONITEM_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface HMDSettingValueSelectionItem : NSObject

@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *selection; // ivar: _selection


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 selection:(id)arg1 ;


@end


#endif