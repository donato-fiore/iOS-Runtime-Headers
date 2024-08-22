// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARQLINLINETOUCH_H
#define ARQLINLINETOUCH_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARQLInlineTouch : NSObject <NSSecureCoding>



@property (nonatomic) CGPoint cgLocation; // ivar: _cgLocation
@property (nonatomic) CGPoint cgPreviousLocation; // ivar: _cgPreviousLocation
@property (nonatomic) NSInteger phase; // ivar: _phase
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *uid; // ivar: _uid


+(BOOL)supportsSecureCoding;
+(id)touchToUUIDMapping;
+(void)removeUIDForUITouch:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUITouch:(id)arg0 ;
-(id)uuidForTouch:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif