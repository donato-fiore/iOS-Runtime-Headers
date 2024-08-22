// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMFILEMANAGER_H
#define IMFILEMANAGER_H

@class NSFileManager;



@interface IMFileManager : NSFileManager



+(id)defaultHFSFileManager;
+(id)defaultManager;
-(id)MIMETypeOfPath:(id)arg0 ;
-(id)MIMETypeOfPathExtension:(id)arg0 ;
-(id)UTITypeOfMimeType:(id)arg0 ;
-(id)UTITypeOfPath:(id)arg0 ;
-(id)UTITypeOfPathExtension:(id)arg0 ;
-(id)displayNameOfFileWithName:(id)arg0 hfsFlags:(unsigned short)arg1 ;
-(id)pathExtensionForMIMEType:(id)arg0 ;
-(id)pathExtensionForUTIType:(id)arg0 ;


@end


#endif