// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _KSFILEFILE_H
#define _KSFILEFILE_H

@class KSFileEntry, NSURL, NSDate;
@protocol NSSecureCoding, _KSBlobSaver;



@interface _KSFileFile : KSFileEntry <NSSecureCoding, _KSBlobSaver>

 {
    int _protectionClass;
    NSURL *_url;
    NSDate *_lastModified;
    NSUInteger _offset;
    NSUInteger _size;
}




+(BOOL)supportsSecureCoding;
+(int)protectionFromURL:(id)arg0 ;
-(NSUInteger)size;
-(id)URL;
-(id)contents;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)lastModified;
-(void)consistencyCheck;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadAttributesFromURL:(id)arg0 ;
-(void)restoreToPath:(id)arg0 ;
-(void)saveAttributesToURL:(id)arg0 ;
-(void)saveTo:(id)arg0 ;


@end


#endif