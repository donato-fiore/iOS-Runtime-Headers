// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT12SEARCHRESULT_H
#define _TTC8FMCLIENT12SEARCHRESULT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient12SearchResult : NSObject <NSSecureCoding>

 {
    ? devices;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic) NSInteger resultCode; // ivar: resultCode


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif