// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCONTENTLOOKUPSERVICE_H
#define IMCONTENTLOOKUPSERVICE_H

@class AMSLookup, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface IMContentLookupService : NSObject

@property (retain, nonatomic) AMSLookup *amsLookup; // ivar: _amsLookup
@property (retain, nonatomic) NSString *artworkType; // ivar: _artworkType
@property (retain, nonatomic) NSArray *ids; // ivar: _ids
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (nonatomic) NSInteger version; // ivar: _version


-(id)init;
-(id)initWithIds:(id)arg0 ;
-(void)_configureRequest;
-(void)request:(id)arg0 ;


@end


#endif