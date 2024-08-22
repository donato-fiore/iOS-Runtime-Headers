// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3LANGUAGERESOURCES_H
#define ML3LANGUAGERESOURCES_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ML3LanguageResources : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *canonicalLanguageIdentifier; // ivar: _canonicalLanguageIdentifier
@property (readonly, nonatomic) NSDictionary *sectionsInfo; // ivar: _sectionsInfo
@property (readonly, nonatomic) NSDictionary *sortingDetails; // ivar: _sortingDetails


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSectionsInfo:(id)arg0 sortingDetails:(id)arg1 canonicalLanguageIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif