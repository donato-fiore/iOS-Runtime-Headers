// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXUISESSION_H
#define EXUISESSION_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EXUISession : NSObject <NSSecureCoding>



@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSString *sceneIdentifier; // ivar: _sceneIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSession:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sceneIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif