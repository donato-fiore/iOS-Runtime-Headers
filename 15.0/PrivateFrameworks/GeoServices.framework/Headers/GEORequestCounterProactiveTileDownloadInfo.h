// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREQUESTCOUNTERPROACTIVETILEDOWNLOADINFO_H
#define GEOREQUESTCOUNTERPROACTIVETILEDOWNLOADINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORequestCounterProactiveTileDownloadInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *policies; // ivar: _policies


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 policies:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif