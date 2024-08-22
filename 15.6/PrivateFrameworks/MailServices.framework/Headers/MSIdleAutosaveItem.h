// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSIDLEAUTOSAVEITEM_H
#define MSIDLEAUTOSAVEITEM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSIdleAutosaveItem : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *autosaveIdentifier; // ivar: _autosaveIdentifier
@property (readonly, copy, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)supportsSecureCoding;
+(id)withAutosaveIdentifier:(id)arg0 subject:(id)arg1 ;
-(id)initWithAutosaveIdentifier:(id)arg0 subject:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif