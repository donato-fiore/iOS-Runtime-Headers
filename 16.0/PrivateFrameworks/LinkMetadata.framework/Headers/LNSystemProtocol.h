// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSYSTEMPROTOCOL_H
#define LNSYSTEMPROTOCOL_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNSystemProtocol : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *defaultActionIdentifier; // ivar: _defaultActionIdentifier
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger kind;
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSString *typeName;


+(BOOL)supportsSecureCoding;
+(id)allProtocols;
+(id)allProtocolsByIdentifier;
+(id)audioStartingProtocol;
+(id)cancelProtocol;
+(id)changeBinarySettingSystemProtocol;
+(id)closeEntityProtocol;
+(id)copyEntityProtocol;
+(id)copySystemProtocol;
+(id)createEntitySystemProtocol;
+(id)cutEntityProtocol;
+(id)cutSystemProtocol;
+(id)deleteEntitySystemProtocol;
+(id)duplicateEntitySystemProtocol;
+(id)enterMarkupProtocol;
+(id)exitMarkupProtocol;
+(id)favoriteEntityProtocol;
+(id)favoriteProtocol;
+(id)focusConfigurationProtocol;
+(id)moveSpatialProtocol;
+(id)navigateSequentiallyProtocol;
+(id)ofKind:(NSInteger)arg0 ;
+(id)openEntitySystemProtocol;
+(id)parametersForProtocolWithIdentifier:(id)arg0 ;
+(id)pasteSystemProtocol;
+(id)pauseWorkoutProtocol;
+(id)previewEntityProtocol;
+(id)protocolOrNilWithIdentifier:(id)arg0 ;
+(id)protocolWithIdentifier:(id)arg0 ;
+(id)putEntityInContainerProtocol;
+(id)requiresMDMChecksProtocol;
+(id)resizeProtocol;
+(id)resumeWorkoutProtocol;
+(id)saveEntitySystemProtocol;
+(id)scrollProtocol;
+(id)searchSystemProtocol;
+(id)sessionStartingProtocol;
+(id)startDiveProtocol;
+(id)startWorkoutProtocol;
+(id)stingProtocol;
+(id)systemProtocolKindsByIdentifier;
+(id)undoSystemProtocol;
+(id)zoomProtocol;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif