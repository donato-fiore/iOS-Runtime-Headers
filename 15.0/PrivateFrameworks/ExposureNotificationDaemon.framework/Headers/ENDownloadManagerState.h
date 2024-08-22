// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENDOWNLOADMANAGERSTATE_H
#define ENDOWNLOADMANAGERSTATE_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ENDownloadManagerState : NSObject <NSSecureCoding>

 {
    NSDictionary *_statesByURL;
}


@property (readonly, copy, nonatomic) NSArray *endpointStates;
@property (readonly, copy, nonatomic) NSArray *endpoints;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stateForServerBaseURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif