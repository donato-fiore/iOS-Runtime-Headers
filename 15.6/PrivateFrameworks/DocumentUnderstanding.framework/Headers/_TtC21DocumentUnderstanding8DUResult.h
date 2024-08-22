// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21DOCUMENTUNDERSTANDING8DURESULT_H
#define _TTC21DOCUMENTUNDERSTANDING8DURESULT_H

@class NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding8DUResult : NSObject <NSCoding, NSCopying>

 {
    ? title;
    ? identifier;
    ? comment;
    ? score;
    ? determiningModelIdentifier;
}


@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *determiningModelIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif