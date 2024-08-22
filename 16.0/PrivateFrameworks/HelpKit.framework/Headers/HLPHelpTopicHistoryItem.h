// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPHELPTOPICHISTORYITEM_H
#define HLPHELPTOPICHISTORYITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HLPHelpTopicHistoryItem : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *anchor; // ivar: _anchor
@property (nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif