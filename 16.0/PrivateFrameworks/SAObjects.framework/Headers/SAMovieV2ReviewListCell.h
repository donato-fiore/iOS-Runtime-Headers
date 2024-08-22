// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMOVIEV2REVIEWLISTCELL_H
#define SAMOVIEV2REVIEWLISTCELL_H

@class NSString, NSDate;


#import "SADomainObject.h"

@interface SAMovieV2ReviewListCell : SADomainObject

@property (copy, nonatomic) NSString *reviewAuthor;
@property (copy, nonatomic) NSDate *reviewDate;
@property (copy, nonatomic) NSString *reviewText;


+(id)reviewListCell;
+(id)reviewListCellWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif