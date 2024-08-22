// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSTARTPAGESECTION_H
#define WBSSTARTPAGESECTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSStartPageSection : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
-(id)sectionWithEnabled:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif