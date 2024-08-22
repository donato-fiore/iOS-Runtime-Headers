// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHOWPHOTOSONEUPVIEWCOMMAND_H
#define SFSHOWPHOTOSONEUPVIEWCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFShowPhotosOneUpViewCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFPerson.h"
#import "SFTopic.h"
#import "SFPhotosLibraryImage.h"

@interface SFShowPhotosOneUpViewCommand : SFCommand <SFShowPhotosOneUpViewCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFPerson *matchedPerson; // ivar: _matchedPerson
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (retain, nonatomic) SFPhotosLibraryImage *photosLibraryImage; // ivar: _photosLibraryImage
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif