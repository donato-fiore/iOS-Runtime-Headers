// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKACTIONTABLE_H
#define SKACTIONTABLE_H

@class NSMutableDictionary, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKActionTable : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *_info; // ivar: __info
@property (readonly, retain, nonatomic) NSDictionary *actionTableDictionary; // ivar: _actionTableDictionary


+(BOOL)supportsSecureCoding;
+(id)actionTableWithContentsOfDictionary:(id)arg0 ;
-(BOOL)isEqualToActionTable:(id)arg0 ;
-(id)actionForName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif