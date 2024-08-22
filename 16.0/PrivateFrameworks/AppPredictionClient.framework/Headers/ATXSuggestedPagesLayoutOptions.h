// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESLAYOUTOPTIONS_H
#define ATXSUGGESTEDPAGESLAYOUTOPTIONS_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesLayoutOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSSet *candidateApps; // ivar: _candidateApps


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif