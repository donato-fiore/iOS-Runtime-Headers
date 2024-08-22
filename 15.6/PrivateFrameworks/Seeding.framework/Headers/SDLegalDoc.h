// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SDLEGALDOC_H
#define SDLEGALDOC_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SDLegalDoc : NSObject <NSSecureCoding>



@property (copy) NSString *content; // ivar: _content
@property NSInteger legal_id; // ivar: _legal_id
@property (copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)legalDocWithID:(NSInteger)arg0 title:(id)arg1 content:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(NSInteger)arg0 title:(id)arg1 content:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif