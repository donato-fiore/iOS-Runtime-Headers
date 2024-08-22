// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMAPCONTAINER_H
#define PKMAPCONTAINER_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKMapContainer : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSMutableDictionary *recipientMap; // ivar: _recipientMap
@property (readonly, copy, nonatomic) NSMutableDictionary *scoreMap; // ivar: _scoreMap
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllObjects;
-(void)updateWithContainer:(id)arg0 ;


@end


#endif