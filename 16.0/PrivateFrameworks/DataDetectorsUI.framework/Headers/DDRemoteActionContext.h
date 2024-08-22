// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDREMOTEACTIONCONTEXT_H
#define DDREMOTEACTIONCONTEXT_H

@class NSURL, NSString, NSArray, NSDictionary;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DDRemoteActionContext : NSObject <NSCoding, NSSecureCoding>

 {
    ? _result;
}


@property (retain) NSURL *URL; // ivar: _URL
@property (retain) NSString *actionClass; // ivar: _actionClass
@property (retain) NSArray *associatedResults; // ivar: _associatedResults
@property (retain) NSDictionary *context; // ivar: _context
@property (copy) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property ? result;


+(BOOL)isClassAllowedFromString:(id)arg0 ;
-(?)initWithURL:(?)arg0 result:(?)arg1 context:(?)arg2 associatedResultsclassName;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif