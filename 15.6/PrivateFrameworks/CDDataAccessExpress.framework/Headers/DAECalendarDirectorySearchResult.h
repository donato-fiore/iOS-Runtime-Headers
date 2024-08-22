// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAECALENDARDIRECTORYSEARCHRESULT_H
#define DAECALENDARDIRECTORYSEARCHRESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *preferredAddress; // ivar: _preferredAddress


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif